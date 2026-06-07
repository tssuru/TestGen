try:
    
    try:
        print(9, end="")
        print(1>=0, end="")
        print(4, end="")
    except Exception: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
