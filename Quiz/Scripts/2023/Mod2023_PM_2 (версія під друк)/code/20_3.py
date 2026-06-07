try:
    def f():
        try:
            res = int("6")
        except KeyboardInterrupt: return 4
        except Exception: return 0
        return res
    
    print(f())
    
except: print('error')
