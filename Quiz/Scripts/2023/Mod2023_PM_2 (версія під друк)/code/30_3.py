try:
    def f():
        try:
            res = int(2//0.0)
        except KeyboardInterrupt: return 3
        except Exception: return 0
        return res
    
    print(f())
    
except: print('error')
