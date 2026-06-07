try:
    def f():
        try:
            res = int("6")
            return 41
        except TypeError: return 1
        except BaseException: return 0
        else: return 33
        return res
    
    print(f())
    
except: print('error')
