try:
    
    try:
        print(7, end="")
        print(int(0/1), end="")
        print(2, end="")
    except Exception: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(4, end="")
    
except: print('error')
