try:
    def f():
        try:
            res = int(2%2)
            return 44
        except Exception: return 1
        except KeyboardInterrupt: return 3
        return res
    
    print(f())
    
except: print('error')
