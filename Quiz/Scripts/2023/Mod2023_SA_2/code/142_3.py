try:
    def f():
        try:
            res = int(4%1)
            return 42
        except KeyboardInterrupt: return 8
        except Exception: return 7
        return res
    
    print(f())
    
except: print('error')
