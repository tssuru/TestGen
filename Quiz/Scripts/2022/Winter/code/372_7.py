try:
    
    try:
        print(9, end="")
        print(int(6/0), end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except Exception: 
        print(8, end="")
    else:
        print(5, end="")
    finally:
        print(6, end="")
    
except: print('error')
