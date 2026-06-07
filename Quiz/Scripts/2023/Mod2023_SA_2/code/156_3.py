try:
    def f():
        try:
            res = int(3//1)
            return 42
        except ValueError: return 8
        except Exception: return 1
        else: return 33
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
