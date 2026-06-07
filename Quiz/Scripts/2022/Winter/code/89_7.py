try:
    
    try:
        print(0, end="")
        print(int(5%2), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(7, end="")
    finally:
        print(1, end="")
    
except: print('error')
