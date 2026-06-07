try:
    def f():
        try:
            res = 4>=3
            return 42
        except KeyboardInterrupt: return 7
        except ValueError: return 0
        finally: return 24
        return res
    
    print(f())
    
except: print('error')
