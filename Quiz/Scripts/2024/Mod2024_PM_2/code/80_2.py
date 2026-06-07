try:
    def f():
        try:
            res = int("d5")
            return 41
        except ZeroDivisionError: return 1
        except BaseException: return 7
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
