try:
    def f():
        try:
            res = int("9")
            return 45
        except TypeError: return 2
        except ValueError: return 1
        else: return 34
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
