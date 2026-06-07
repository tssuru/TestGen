try:
    def f():
        try:
            res = int("d9")
        except BaseException: return 2
        except ZeroDivisionError: return 6
        else: return 31
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
