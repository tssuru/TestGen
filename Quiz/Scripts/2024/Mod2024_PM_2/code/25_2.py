try:
    def f():
        try:
            res = int("b3")
            return 45
        except KeyboardInterrupt: return 1
        except Exception: return 6
        return res
    
    print(f())
    
except: print('error')
