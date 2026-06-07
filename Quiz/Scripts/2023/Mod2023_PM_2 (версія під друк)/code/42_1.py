try:
    a,b,c=8,9,6
    def h(a,b,c=7):
        print(a,b,c,end=" ")
    
    h(1,0,2)
    print(a,b,c)
    
except: print('error')
