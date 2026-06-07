try:
    
    try:
        print(1, end="")
        print(int(2/2), end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except ValueError: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(5, end="")
    
except: print('error')
