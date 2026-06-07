try:
    def f():
        try:
            res = int(5%2)
        except KeyboardInterrupt: return 6
        except ValueError: return 2
        finally: return 22
        return res
    
    print(f())
    
except: print('error')
