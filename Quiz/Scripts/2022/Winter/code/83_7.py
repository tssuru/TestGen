try:
    
    try:
        print(7, end="")
        print(int(5%1), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(5, end="")
    
except: print('error')
