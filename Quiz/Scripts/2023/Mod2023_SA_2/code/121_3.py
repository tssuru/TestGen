try:
    def f():
        try:
            res = int("2")
            return 45
        except BaseException: return 8
        except ZeroDivisionError: return 1
        else: return 34
        return res
    
    print(f())
    
except: print('error')
