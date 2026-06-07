try:
    def f():
        try:
            res = int("a5")
            return 41
        except Exception: 
            return 1
        except ValueError: 
            return 7
        finally: return 20
        return res
    
    print(f())
except: print('error')
