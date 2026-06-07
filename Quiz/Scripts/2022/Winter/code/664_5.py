try:
    
    a,b,c=9,8,6
    def h(a,b,c=7):
        print(a,b,c,end="")
    
    h(2,5,4)
    print(a,b,c)
    
except: print('error')
