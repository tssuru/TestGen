try:
    def f():
        try:
            res = int("5")
        except BaseException: return 8
        except ZeroDivisionError: return 3
        else: return 33
        return res
    
    print(f())
    
except: print('error')
