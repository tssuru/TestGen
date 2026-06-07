try:
    def f():
        try:
            res = int("d4")
            return 43
        except ZeroDivisionError: return 0
        except BaseException: return 9
        else: return 30
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
