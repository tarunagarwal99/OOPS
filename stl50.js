import $ from "jquery";


let root = document.getElementById("root");
$(document).ready(function() {
    $("#root").click(function() {
        if (root.value === "on") {
            root.value = "off";
        } else {
            root.value = "on";
        }
    });
});
// <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
// <input type="button" id="root" value="off">