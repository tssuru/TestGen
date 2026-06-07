try:
    
    try:
        print(4, end="")
        print(int(2%0), end="")
        print(6, end="")
    except ValueError: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(5, end="")
    finally:
        print(0, end="")
    
except: print('error')
