try:
    def f():
        try:
            res = int(4%1)
            return 45
        except ZeroDivisionError: return 8
        except Exception: return 3
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
