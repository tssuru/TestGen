try:
    def f():
        try:
            res = 8<4
            return 44
        except TypeError: 
            return 3
        except KeyboardInterrupt: 
            return 7
        finally: return 24
        return res
    
    print(f())
except: print('error')
