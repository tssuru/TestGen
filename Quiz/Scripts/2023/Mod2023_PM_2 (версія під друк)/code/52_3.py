try:
    def f():
        try:
            res = int(6//0)
        except Exception: return 8
        except KeyboardInterrupt: return 1
        return res
    
    print(f())
    
except: print('error')
