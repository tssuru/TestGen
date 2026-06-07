try:
    
    try:
        print(4, end="")
        print(int(0//0), end="")
        print(7, end="")
    except ValueError: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    else:
        print(1, end="")
    finally:
        print(9, end="")
    
except: print('error')
