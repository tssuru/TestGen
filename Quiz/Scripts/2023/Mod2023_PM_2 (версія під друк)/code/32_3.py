try:
    def f():
        try:
            res = int("a0")
        except ValueError: return 8
        except BaseException: return 3
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
