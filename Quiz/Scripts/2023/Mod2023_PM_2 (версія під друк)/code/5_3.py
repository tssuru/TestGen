try:
    def f():
        try:
            res = int("5")
            return 40
        except BaseException: return 7
        except TypeError: return 0
        else: return 32
        return res
    
    print(f())
    
except: print('error')
