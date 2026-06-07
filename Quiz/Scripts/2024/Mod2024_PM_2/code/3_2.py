try:
    def f():
        try:
            res = int("d1")
            return 41
        except BaseException: return 2
        except ZeroDivisionError: return 5
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
