try:
    a,b,c=8,1,2
    def h(a):
        global c
        a=5
        b*=4
        c=1
        return a+b+c
    
    a,b,c=0,9,5
    print(h(a),a,b,c)
    
except: print('error')
