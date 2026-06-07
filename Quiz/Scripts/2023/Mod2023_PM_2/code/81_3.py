try:
    def f():
        try:
            res = int(5/1)
            return 42
        except BaseException: return 0
        except KeyboardInterrupt: return 2
        else: return 30
        return res
    
    print(f())
    
except: print('error')
