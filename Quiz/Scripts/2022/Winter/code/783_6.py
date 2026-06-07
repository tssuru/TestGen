try:
    a,b,c=4,3,6
    def h(a):
        a=2
        b+=1
        c=5
        return a+b+c
    
    a,b,c=1,2,5
    print(h(a),a,b,c)
    
except: print('error')
