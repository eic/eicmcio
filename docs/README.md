:orphan:
# Documentation

To Build the documentation:

## Requirments:

- [Sphinx](http://www.sphinx-doc.org/en/master/) - Python documentation generator
- [Read the Docs Sphinx Theme](https://sphinx-rtd-theme.readthedocs.io/en/stable/) - Theme for final output
- [recommonmark](https://github.com/miyakogi/m2r) - Markdown to reStructuredText


```
pip install sphinx sphinx_rtd_theme recommonmark
```

## Building

```bash
pip install --upgrade sphinx-autobuild sphinx_rtd_theme recommonmark

# from project root
sphinx-autobuild docs docs/_build/html

# from docs root
sphinx-autobuild . _build/html
```


## Read the docs

The documentation is available at https://g4e.readthedocs.io

It updates automatically when changes are pushed do the repo

