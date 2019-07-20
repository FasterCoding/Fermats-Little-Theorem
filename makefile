version=

release:
	@echo "Start Release Version: $(version)"
	@git checkout develop && git pull && \
	git checkout master && git pull && \
	git checkout develop && git merge master
	@git tag $(version) && \
	git checkout master && git merge develop && \
	git push && \
	git checkout develop && \
	git push && git push --tags
