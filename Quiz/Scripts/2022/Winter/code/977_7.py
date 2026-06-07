try:
    
    try:
        print(4, end="")
        print(int(7//1), end="")
        print(0, end="")
    except ValueError: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(6, end="")
    finally:
        print(8, end="")
    
except: print('error')
