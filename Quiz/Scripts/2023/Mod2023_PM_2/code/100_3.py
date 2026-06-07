try:
    def f():
        try:
            res = int(2%2)
            return 43
        except BaseException: return 7
        except KeyboardInterrupt: return 4
        else: return 31
        return res
    
    print(f())
    
except: print('error')
