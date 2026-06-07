try:
    def f():
        try:
            res = int(2//1)
            return 45
        except BaseException: return 1
        except Exception: return 4
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
