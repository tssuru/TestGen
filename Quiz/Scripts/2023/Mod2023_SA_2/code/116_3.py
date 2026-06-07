try:
    def f():
        try:
            res = int("5")
        except ZeroDivisionError: return 4
        except BaseException: return 1
        else: return 35
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
