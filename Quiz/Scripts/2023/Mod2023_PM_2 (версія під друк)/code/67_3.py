try:
    def f():
        try:
            res = int("d0")
            return 43
        except BaseException: return 7
        except Exception: return 1
        return res
    
    print(f())
    
except: print('error')
