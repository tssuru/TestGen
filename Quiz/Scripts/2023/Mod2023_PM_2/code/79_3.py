try:
    def f():
        try:
            res = int("a6")
            return 43
        except Exception: return 8
        except ZeroDivisionError: return 0
        else: return 35
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
