try:
    def f():
        try:
            res = int(8%0.0)
            return 45
        except Exception: return 7
        except ValueError: return 9
        finally: return 25
        return res
    
    print(f())
    
except: print('error')
