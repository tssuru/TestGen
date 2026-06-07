try:
    def f():
        try:
            res = int(6%0)
        except BaseException: return 2
        except ZeroDivisionError: return 9
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
