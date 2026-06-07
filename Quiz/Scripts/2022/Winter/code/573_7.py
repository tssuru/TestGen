try:
    
    try:
        print(1, end="")
        print(9!=5, end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(6, end="")
    finally:
        print(6, end="")
    
except: print('error')
