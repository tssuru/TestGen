try:
    def f():
        try:
            res = int("c8")
            return 43
        except TypeError: return 7
        except BaseException: return 1
        else: return 31
        return res
    
    print(f())
    
except: print('error')
