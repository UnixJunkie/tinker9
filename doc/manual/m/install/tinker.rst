Build the Canonical Tinker
==========================

**Checkout the Required Version of Tinker**

Using the incorrect Tinker version, the executables would be
very likely to fail with segfault.

If this source code was cloned by Git, you can
checkout Tinker from the *tinker* Git submodule:

.. code-block:: bash

   # checkout Tinker
   cd tinker9
   git submodule update --init

Alternatively, clone
`Tinker from GitHub <https://github.com/tinkertools/tinker>`_,
then checkout the required version **080e8f1d**.
You should move this *tinker* directory under *tinker9*.

**Make libtinker**

Compiling libtinker is now automated in the next step.
