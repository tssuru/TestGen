try:
    def f():
        try:
            res = int(4/2)
            return 42
        except ZeroDivisionError: return 2
        except Exception: return 0
        else: return 30
        finally: return 21
        return res
    
    print(f())
    
except: print('error')
