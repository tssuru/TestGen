try:
    def f():
        try:
            res = int("b1")
            return 45
        except BaseException: return 7
        except ZeroDivisionError: return 2
        else: return 31
        finally: return 23
        return res
    
    print(f())
    
except: print('error')
