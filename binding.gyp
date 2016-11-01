{
  "targets": [
    {
      "target_name": "hastytp",
      "sources": [ "hastytp.cc", "functions.cc" ],
      "include_dirs" : [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ],
}
