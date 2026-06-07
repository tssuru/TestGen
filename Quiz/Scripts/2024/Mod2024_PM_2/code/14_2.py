try:
    def f():
        try:
            res = int("b1")
            return 42
        except BaseException: return 5
        except ValueError: return 4
        else: return 33
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
