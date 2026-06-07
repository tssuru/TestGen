try:
    def f():
        try:
            res = int("d1")
            return 42
        except ZeroDivisionError: return 5
        except BaseException: return 7
        else: return 33
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
